import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    id: historyScreen
    width: 290
    height: 631

    // Custom Signal: Tells your main screen which equation was tapped
    signal equationSelected(string equation)

    // Base background for the history view
    Rectangle {
        anchors.fill: parent
        color: "#FAFAFA"
    }

    // ==========================================
    // 1. TOP HEADER BAR
    // ==========================================
    Rectangle {
        id: headerBar
        width: parent.width
        height: 50
        color: "#FFFFFF"
        border.color: "#EAEAEA"
        border.width: 1
        z: 5 // Keeps it below the drawer but above the list

        Button {
            id: menuButton
            width: 40
            height: 40
            anchors.left: parent.left
            anchors.leftMargin: 10
            anchors.verticalCenter: parent.verticalCenter

            text: "≡" // 3-line hamburger menu icon
            font.pixelSize: 26
            flat: true

            // Toggles the pop-out sidebar on/off
            onClicked: sidebarDrawer.open = !sidebarDrawer.open
        }

        Text {
            text: "History Log"
            font.pixelSize: 16
            font.bold: true
            anchors.centerIn: parent
            color: "#333333"
        }
    }

    // ==========================================
    // 2. THE HISTORY LIST BOX (ListView)
    // ==========================================
    ListView {
        id: historyListView
        anchors.top: headerBar.bottom
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        clip: true

        model: historyModel
        delegate: historyItemDelegate
    }

    // Sample Data Model (Holds your equation and output calculations)
    ListModel {
        id: historyModel
        ListElement { equation: "125 + 382"; answer: "507" }
        ListElement { equation: "log(100) × 5"; answer: "10" }
        ListElement { equation: "√(144) - 4"; answer: "8" }
        ListElement { equation: "90% of 450"; answer: "405" }
    }

    // Custom Look and Touch Area for list entries
    Component {
        id: historyItemDelegate
        Item {
            width: historyListView.width
            height: 65

            Rectangle {
                anchors.fill: parent
                color: itemMouseArea.pressed ? "#EFEFEF" : (itemMouseArea.containsMouse ? "#F9F9F9" : "transparent")
                border.color: "#F0F0F0"
                border.width: 1
            }

            Column {
                anchors.fill: parent
                anchors.margins: 12
                spacing: 2

                Text {
                    text: equation
                    font.pixelSize: 13
                    color: "#777777"
                }
                Text {
                    text: "= " + answer
                    font.pixelSize: 16
                    font.bold: true
                    color: "#111111"
                }
            }

            MouseArea {
                id: itemMouseArea
                anchors.fill: parent
                hoverEnabled: true
                onClicked: {
                    // Triggers the signal sending the formula back to the main screen input
                    historyScreen.equationSelected(equation)
                }
            }
        }
    }

    // ==========================================
    // 3. POP-OUT SIDEBAR OVERLAY
    // ==========================================
    Rectangle {
        id: sidebarDrawer
        property bool open: false

        width: 210
        height: parent.height
        color: "#F4F4F4"
        z: 10 // Keeps it strictly layered on top of all other elements

        // Adds a crisp drop-shadow line along the right edge
        Rectangle {
            width: 1
            height: parent.height
            anchors.right: parent.right
            color: "#D0D0D0"
        }

        // Slide Animation: Controls the horizontal movement smoothly
        x: open ? 0 : -width
        Behavior on x {
            NumberAnimation { duration: 220; easing.type: Easing.OutCubic }
        }

        // Layout container for sidebar navigation buttons
        Column {
            anchors.fill: parent
            anchors.topMargin: 60
            spacing: 8

            Button {
                text: "Standard Mode"
                font.pixelSize: 14
                width: parent.width - 20
                anchors.horizontalCenter: parent.horizontalCenter
                flat: true
                onClicked: sidebarDrawer.open = false
            }
            Button {
                text: "Scientific Mode"
                font.pixelSize: 14
                width: parent.width - 20
                anchors.horizontalCenter: parent.horizontalCenter
                flat: true
                onClicked: sidebarDrawer.open = false
            }
            Button {
                text: "Clear Entries"
                font.pixelSize: 14
                width: parent.width - 20
                anchors.horizontalCenter: parent.horizontalCenter
                flat: true
                onClicked: {
                    historyModel.clear()
                    sidebarDrawer.open = false
                }
            }
        }
    }
}