import QtQuick 2.12
import CarSpeedometer 1.0
import QtQuick.Timeline 1.0
//import QtStudio3D 2.3
import QtQuick.Studio.Components 1.0

Rectangle {
    id: rectangle2
    width: Constants.width
    height: Constants.height

    color: Constants.backgroundColor

    Image {
        id: background
        x: 0
        y: -8
        width: 1030
        height: 784
        source: "car speedometer_background.png"
        fillMode: Image.PreserveAspectFit
    }

    Rectangle {
        id: rectangle1
        x: 829
        y: 208
        width: 2
        height: 200
        color: "#ffffff"
        rotation: 90
        transformOrigin: Item.Center
    }

    Rectangle {
        id: rectangle
        x: 769
        y: 183
        width: 2
        height: 100
        color: "#ffffff"
    }

    Image {
        id: notify_screen
        x: 419
        y: 144
        width: 846
        height: 458
        opacity: 0.5
        fillMode: Image.PreserveAspectFit
        source: "notift_background.png"
    }

    Image {
        id: car
        x: 532
        y: 107
        width: 641
        height: 552
        fillMode: Image.PreserveAspectFit
        source: "car.png"
    }

    Image {
        id: r_spedo
        x: 173
        y: 124
        width: 590
        height: 478
        fillMode: Image.PreserveAspectFit
        source: "background.png"

        Image {
            id: fule_ico
            x: -40
            y: 30
            width: 668
            height: 428
            fillMode: Image.PreserveAspectFit
            source: "fuel_icon.png"
        }

        Image {
            id: f_3
            x: -11
            y: 1
            width: 615
            height: 453
            fillMode: Image.PreserveAspectFit
            source: "f_grd5.png"
        }

        Image {
            id: f_2
            x: -11
            y: 1
            width: 615
            height: 453
            fillMode: Image.PreserveAspectFit
            source: "f_grd4.png"
        }

        Image {
            id: f_1
            x: -11
            y: 1
            width: 615
            height: 453
            fillMode: Image.PreserveAspectFit
            source: "f_grd3.png"
        }

        Image {
            id: f_0
            x: -11
            y: 1
            width: 615
            height: 453
            fillMode: Image.PreserveAspectFit
            source: "f_grd2.png"
        }

        Text {
            id: element28
            x: 280
            y: 399
            color: "#ffffff"
            text: qsTr("KMH")
            font.pixelSize: 18
        }

        Text {
            id: element26
            x: 332
            y: 178
            color: "#ffffff"
            text: qsTr("D")
            font.pixelSize: 20
        }

        Text {
            id: element25
            x: 304
            y: 178
            color: "#ffffff"
            text: qsTr("N")
            font.pixelSize: 20
        }

        Text {
            id: element24
            x: 280
            y: 178
            color: "#ffffff"
            text: qsTr("R")
            font.pixelSize: 20
        }

        Text {
            id: element23
            x: 258
            y: 178
            color: "#ffffff"
            text: qsTr("P")
            font.pixelSize: 20
        }

        Text {
            id: element
            x: 148
            y: 232
            color: "#ffffff"
            text: qsTr("0")
            fontSizeMode: Text.VerticalFit
            font.family: "Verdana"
            font.pixelSize: 24
        }

        Text {
            id: element12
            x: 146
            y: 187
            color: "#ffffff"
            text: qsTr("20")
            font.pixelSize: 24
            font.family: "Verdana"
            fontSizeMode: Text.VerticalFit
        }

        Text {
            id: element13
            x: 164
            y: 144
            color: "#ffffff"
            text: qsTr("40")
            fontSizeMode: Text.VerticalFit
            font.family: "Verdana"
            font.pixelSize: 24
        }

        Text {
            id: element14
            x: 191
            y: 111
            color: "#ffffff"
            text: qsTr("60")
            font.pixelSize: 24
            font.family: "Verdana"
            fontSizeMode: Text.VerticalFit
        }

        Text {
            id: element15
            x: 236
            y: 82
            color: "#ffffff"
            text: qsTr("80")
            fontSizeMode: Text.VerticalFit
            font.family: "Verdana"
            font.pixelSize: 24
        }

        Text {
            id: element16
            x: 283
            y: 75
            color: "#ffffff"
            text: qsTr("100")
            font.pixelSize: 24
            font.family: "Verdana"
            fontSizeMode: Text.VerticalFit
        }

        Text {
            id: element17
            x: 337
            y: 85
            color: "#ffffff"
            text: qsTr("120")
            fontSizeMode: Text.VerticalFit
            font.family: "Verdana"
            font.pixelSize: 24
        }

        Text {
            id: element18
            x: 375
            y: 111
            color: "#ffffff"
            text: qsTr("140")
            font.pixelSize: 24
            font.family: "Verdana"
            fontSizeMode: Text.VerticalFit
        }

        Text {
            id: element20
            x: 402
            y: 150
            color: "#ffffff"
            text: qsTr("160")
            fontSizeMode: Text.VerticalFit
            font.family: "Verdana"
            font.pixelSize: 24
        }

        Text {
            id: element21
            x: 413
            y: 192
            color: "#ffffff"
            text: qsTr("180")
            font.pixelSize: 24
            font.family: "Verdana"
            fontSizeMode: Text.VerticalFit
        }

        Text {
            id: element22
            x: 413
            y: 237
            color: "#ffffff"
            text: qsTr("200")
            fontSizeMode: Text.VerticalFit
            font.family: "Verdana"
            font.pixelSize: 24
        }

        Text {
            id: element27
            x: 288
            y: 138
            color: "#ffffff"
            text: qsTr("4")
            font.pixelSize: 28
            font.family: "Verdana"
            fontSizeMode: Text.VerticalFit
        }

        Text {
            id: element29
            x: 285
            y: 364
            color: "#ffffff"
            text: qsTr("0")
            fontSizeMode: Text.VerticalFit
            font.family: "Verdana"
            font.pixelSize: 28
        }

        Text {
            id: element19
            x: 616
            y: 57
            color: "#ffffff"
            text: qsTr("28")
            font.family: "Arial"
            font.pixelSize: 60
        }

        Text {
            id: element30
            x: 680
            y: 41
            color: "#ffffff"
            text: qsTr("o")
            font.family: "Times New Roman"
            font.pixelSize: 28
        }

        Text {
            id: element31
            x: 693
            y: 50
            color: "#fbfbfb"
            text: qsTr("c")
            font.family: "Verdana"
            font.pixelSize: 62
        }

        Image {
            id: image
            x: 512
            y: 66
            fillMode: Image.PreserveAspectFit
            source: "whether2.png"
        }

        Text {
            id: element32
            x: 616
            y: 117
            color: "#ffffff"
            text: qsTr("Mansoura City")
            font.family: "Verdana"
            font.pixelSize: 22
        }

        Text {
            id: element33
            x: 581
            y: 194
            color: "#ffffff"
            text: qsTr("READY")
            font.family: "Verdana"
            font.pixelSize: 48
        }

        Item {
            id: r_ptr_item
            x: 275
            y: 226
            width: 43
            height: 42
            rotation: 0

            Image {
                id: r_ptr
                x: -449
                y: -206
                width: 940
                height: 429
                fillMode: Image.PreserveAspectFit
                source: "right_pointer.png"
            }
        }

        Image {
            id: logo
            x: -100
            y: 168
            width: 678
            height: 242
            fillMode: Image.PreserveAspectFit
            source: "logo.png"
        }
    }

    Image {
        id: l_spedo
        x: 30
        y: 192
        width: 390
        height: 362
        fillMode: Image.PreserveAspectFit
        source: "back_ground3.png"

        Item {
            id: l_ptr_item
            x: 192
            y: 152
            width: 75
            height: 57
            anchors.verticalCenter: l_spedo.verticalCenter

            Image {
                id: left_ptr
                x: -192
                y: -261
                width: 444
                height: 570
                anchors.left: l_spedo.left
                fillMode: Image.PreserveAspectFit
                source: "left_pointer.png"
            }
        }

        Text {
            id: element11
            x: 198
            y: 268
            color: "#ffffff"
            text: qsTr("rpm")
            font.family: "Verdana"
            fontSizeMode: Text.HorizontalFit
            font.pixelSize: 14
        }

        Text {
            id: element10
            x: 192
            y: 253
            color: "#ffffff"
            text: qsTr("x")
            font.family: "Verdana"
            fontSizeMode: Text.HorizontalFit
            font.pixelSize: 16
        }

        Text {
            id: element9
            x: 201
            y: 254
            color: "#ffffff"
            text: qsTr("1000")
            font.pixelSize: 16
            fontSizeMode: Text.HorizontalFit
            font.family: "Verdana"
        }

        Text {
            id: element8
            x: 232
            y: 67
            color: "#ffffff"
            text: qsTr("8")
            font.family: "Verdana"
            fontSizeMode: Text.HorizontalFit
            font.pixelSize: 22
            elide: Text.ElideLeft
        }

        Text {
            id: element7
            x: 204
            y: 65
            color: "#ffffff"
            text: qsTr("7")
            font.pixelSize: 22
            fontSizeMode: Text.HorizontalFit
            font.family: "Verdana"
            elide: Text.ElideLeft
        }

        Text {
            id: element6
            x: 172
            y: 70
            color: "#ffffff"
            text: qsTr("6")
            font.family: "Verdana"
            fontSizeMode: Text.HorizontalFit
            font.pixelSize: 22
            elide: Text.ElideLeft
        }

        Text {
            id: element5
            x: 143
            y: 89
            color: "#ffffff"
            text: qsTr("5")
            font.pixelSize: 22
            fontSizeMode: Text.HorizontalFit
            font.family: "Verdana"
            elide: Text.ElideLeft
        }

        Text {
            id: element4
            x: 123
            y: 112
            color: "#ffffff"
            text: qsTr("4")
            font.family: "Verdana"
            fontSizeMode: Text.HorizontalFit
            font.pixelSize: 22
            elide: Text.ElideLeft
        }

        Text {
            id: element3
            x: 114
            y: 144
            color: "#ffffff"
            text: qsTr("3")
            font.pixelSize: 22
            fontSizeMode: Text.HorizontalFit
            font.family: "Verdana"
            elide: Text.ElideLeft
        }

        Text {
            id: element2
            x: 116
            y: 177
            color: "#ffffff"
            text: qsTr("2")
            font.family: "Verdana"
            fontSizeMode: Text.HorizontalFit
            font.pixelSize: 22
            elide: Text.ElideLeft
        }

        Text {
            id: element1
            x: 129
            y: 208
            color: "#ffffff"
            text: qsTr("1")
            elide: Text.ElideLeft
            font.pixelSize: 22
            fontSizeMode: Text.HorizontalFit
            font.family: "Verdana"
        }

        Text {
            id: element0
            x: 150
            y: 232
            color: "#ffffff"
            text: qsTr("0")
            font.family: "Verdana"
            fontSizeMode: Text.HorizontalFit
            font.pixelSize: 22
        }
    }

    Timeline {
        id: timeline
        animations: [
            TimelineAnimation {
                id: timelineAnimation
                running: false
                loops: 1
                from: 0
                duration: 1000
                to: 1000
            }
        ]
        startFrame: 0
        enabled: true
        endFrame: 1100

        KeyframeGroup {
            target: l_ptr_item
            property: "rotation"

            Keyframe {
                frame: 1100
                value: 135
            }
        }
    }
}




