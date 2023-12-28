from imageai. Detection import VideoObjectDetection
import os
from matplotlib import pyplot as plt
import cv2
from timeit import default_timer as timer
from keras import backend as K
from keras.preprocessing.image import load_img
import numpy as np
import requests
import pandas as pd
import re
import time
import json

execution_path = os.getcwd()
detector = ObjectDetection ()
detector.setModelTypeASYOLOV3 () #setting the modle as yolov3
detector.setModelPath(os.path.join(execution_path, "yolo.h5")) #importing the yolo file
detector.loadModel() #loading the model for detection..

custom = detector.CustomObjects (person=True) #calling video detector funtion and passing only motorcycle as for detection
plt.show()
detections = detector.detectCustomObjectsFromImage(
    custom_objects = custom,
    input_image = os. path.join(execution_path, "download-6.jpg"),
    output_image_path = os.path.join(execution_path, "traffic_detected.jpg"),
    minimum_percentage_probability = 50
)
count=0
imjh=load_img("download-6.jpg")
plt.figure() 
plt.imshow(imjh)
plt.show()
for eachObject in detections:
    print (eachObject["name"]," : ", eachObject["percentage_probability"], " : ", eachObject["box_points"])
    print("-----------------------")
    count+=1
print (count)
plt.figure()
imkh=load_img("traffic_detected.jpg")
plt.imshow(imkh)
plt.show()
