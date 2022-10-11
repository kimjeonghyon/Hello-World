# Deeplearning Products  
## framework : tensorflow lite for microcontrollers  
url : https://www.tensorflow.org/lite/microcontrollers?hl=ko  

## refrence : tiny ML book  
book's url : https://www.oreilly.com/library/view/tinyml/9781492052036/  

### 실습코드 
* tinyML/create_sine_model.ipynb 
사인커브 피팅 모델 생성   
양자화, tflite file 변환  
c코드 생성  


## 사용 장비  
Sparkfun board
Sparkfun USB-C to Serial Connector  

## 관련 study group 
* 2022년 가짜연구소 5기 실전 경량화 스터디  
TensorFlow Lite 환경설정 (MCU-SparkFun)
url : https://www.notion.so/chanrankim/TensorFlow-Lite-MCU-SparkFun-1d6f54639e9a4e1cb5396861317e2315



# 버스 승객수 카운터 (Passenger Couter for Bus)
## 목적
버스 승객 탑승 승객수를 자동으로 카운트 하여 BMS시스템으로 전송

## 구성품
아두이노 소스 코드 - 승객 통과 count 로직
아두이노 보드
적외선센서
4 Digit Led
블루투스 통신 칩
휴대용 배터리

## 작동 방식
적외선 거리 센서로 버스 탑승객 인식
탑승객 카운트 정보를 블루투스로 전송
탑승객 카운트를 LED 전광판에 표시

