import QtQuick 2.2
import QtQuick.Window 2.1
import QtQuick.Controls 1.2

Window {

    id: main
    visible: false
    width: 512
    height: 135
    x: (Context.screenX() - rectangle.width - 10)
    y: (Context.screenY() - rectangle.height - 40)
    title: qsTr("Hello World")
    color: "transparent"
    flags: Qt.FramelessWindowHint | Qt.Tool | Qt.WindowStaysOnTopHint

    onActiveChanged: {
        if (!active) {
            Context.closeInstance()
            main.close()
        }
    }

    Rectangle {
        id: rectangle
        x: 0
        y: 0
        width: 512
        height: 135
        color: Context.background()
        radius: 3
        opacity: Context.opacity()
    }

    Image {
        id: image1
        x: 15
        y: 74
        width: 50
        height: 50
        fillMode: Image.PreserveAspectFit
        antialiasing: true
        source: "resources/microphone2.png"
    }

    Slider {
        id: sliderHorizontal1
        x: 108
        y: 90
        width: 372
        height: 21
        maximumValue: 100
        value: Context.microphone()
        onValueChanged: {
            Context.changeMicrophone("capture", this.value)
        }
    }

    Slider {
        id: sliderHorizontal
        x: 108
        y: 30
        width: 372
        height: 21
        maximumValue: 100
        value: Context.volume()
        onValueChanged: {
            Context.changeVolume("volume", this.value)
        }
    }

    Image {
        id: image
        x: 15
        y: 15
        width: 50
        height: 50
        smooth: true
        fillMode: Image.PreserveAspectFit
        antialiasing: true
        source: "resources/audio2.png"
    }

    Image {
        id: image2
        x: 495
        y: 3
        width: 14
        height: 14
        smooth: true
        antialiasing: true
        fillMode: Image.PreserveAspectFit
        source: "resources/conf2.png"
        MouseArea {
            anchors.fill: parent
            //cursorShape: "PointingHandCursor"
            onClicked: {
                Context.showMixer()
                Context.closeInstance()
                main.close()
            }
        }
    }

    Component.onCompleted: {
        main.visible = true;
    }
}
