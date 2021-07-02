import socket
import sys

print(sys.argv)


# 접속할 서버 주소입니다. 여기에서는 루프백(loopback) 인터페이스 주소 즉 localhost를 사용합니다. 
HOST = sys.argv[1]

# 클라이언트 접속을 대기하는 포트 번호입니다.   
PORT = int(sys.argv[2])       


# 소켓 객체를 생성합니다. 
# 주소 체계(address family)로 IPv4, 소켓 타입으로 TCP 사용합니다.  
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)


# 지정한 HOST와 PORT를 사용하여 서버에 접속합니다. 
client_socket.connect((HOST, PORT))

# 메시지를 전송합니다. 
client_socket.sendall(sys.argv[3].encode())

# 메시지를 수신합니다. 
data = client_socket.recv(1024)
print('Received', repr(data.decode()))

# 소켓을 닫습니다.
client_socket.close()
