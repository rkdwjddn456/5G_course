import cv2
import numpy as np

isMLB = False
isMRB = False

def onButton(event, x, y, flags, param):
    global isMLB, isMRB
    if event == cv2.EVENT_LBUTTONDOWN:
        isMLB = True
    elif event == cv2.EVENT_LBUTTONUP:
        isMLB = False
    if event == cv2.EVENT_RBUTTONDOWN:
        isMRB = True
    elif event == cv2.EVENT_RBUTTONUP:
        isMRB = False

img = np.zeros((512, 512, 3), np.uint8) + 255
cv2.imshow('img', img)
cv2.setMouseCallback('img', onButton, [img])

width, height = 512, 512
pwidth, pheight = 90, 78
x, y = 256, 256
direction = 0  # right

while True:
    img = np.zeros((512, 512, 3), np.uint8) + 255
    key = cv2.waitKeyEx(30)
    if key == 0x1B: # ESC
        break

# 방향키 방향 전환

    if key == 0x270000: # right
        direction = 0
    elif key == 0x280000: # down
        direction = 1
    elif key == 0x250000: # left
        direction = 2
    elif key == 0x260000: # up
        direction = 3

# 방향으로 이동

    if direction == 0: # right
        x += 10

    elif direction == 1: # down
        y += 10
    elif direction == 2: # left
        x -= 10
    else: # 3, up
        y -= 10

# 경계 확인

    if x < 0:
        x = 0
        direction = 0
    if x > width - pwidth:
        x = width - pwidth
        direction = 2
    if y < 0:
        y = 0
        direction = 1
    if y > height - pheight:
        y = height - pheight
        direction = 3
    pts = np.array([[x+20, y+78], [x+70, y+78], [x+92, y+33], [x+45,y], [x, y+33]])

    cv2.fillConvexPoly(img, pts, color=(0,255,0))

    if isMLB:
        text = 'Hello OpenCV'
        org = (250, 100)
        font = cv2.FONT_HERSHEY_SIMPLEX
        cv2.putText(img, text, org, font, 1, (255, 0, 0), 2)

    if isMRB:
        pt1 = 0, 0
        pt2 = 150, 150
        cv2.rectangle(img, pt1, pt2, (0, 0, 255), -1)
        
    cv2.imshow('img', img)
    
cv2.destroyAllWindows()