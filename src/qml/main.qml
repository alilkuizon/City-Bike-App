import QtQuick
import QtQuick.Layouts

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    RowLayout {
        spacing: 20
        Rectangle {
            Layout.fillWidth: true
            Layout.preferredWidth: 10
            Text {
                text: "hello"
            }
        }
        Rectangle {
            Layout.fillWidth: true
            Layout.preferredWidth: 10
            Text {
                text: "hello"
            }
        }
    }
}
