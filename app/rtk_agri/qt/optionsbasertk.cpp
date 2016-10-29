#include "optionsbasertk.hpp"

OptionsBaseRtk::OptionsBaseRtk(QWidget *parent)
    :QDialog(parent)
{
    setupUi();
    retranslateUi();
    
}

OptionsBaseRtk::~OptionsBaseRtk()
{
}

void OptionsBaseRtk::setupUi(){
    if (this->objectName().isEmpty())
        this->setObjectName(QString::fromUtf8("OptionsStr2str"));
    this->resize(800, 398);
    RTCM2radioButton = new QRadioButton(this);
    RTCM2radioButton->setObjectName(QString::fromUtf8("RTCM2radioButton"));
    RTCM2radioButton->setGeometry(QRect(20, 40, 117, 22));
    RTCM3radioButton = new QRadioButton(this);
    RTCM3radioButton->setObjectName(QString::fromUtf8("RTCM3radioButton"));
    RTCM3radioButton->setGeometry(QRect(20, 70, 117, 22));
    NOVradioButton = new QRadioButton(this);
    NOVradioButton->setObjectName(QString::fromUtf8("NOVradioButton"));
    NOVradioButton->setGeometry(QRect(20, 100, 117, 22));
    OEM3radioButton = new QRadioButton(this);
    OEM3radioButton->setObjectName(QString::fromUtf8("OEM3radioButton"));
    OEM3radioButton->setGeometry(QRect(20, 130, 117, 22));
    UBXradioButton = new QRadioButton(this);
    UBXradioButton->setObjectName(QString::fromUtf8("UBXradioButton"));
    UBXradioButton->setGeometry(QRect(20, 160, 117, 22));
    SS2radioButton = new QRadioButton(this);
    SS2radioButton->setObjectName(QString::fromUtf8("SS2radioButton"));
    SS2radioButton->setGeometry(QRect(130, 160, 117, 22));
    HEMISradioButton = new QRadioButton(this);
    HEMISradioButton->setObjectName(QString::fromUtf8("HEMISradioButton"));
    HEMISradioButton->setGeometry(QRect(130, 40, 117, 22));
    STQradioButton = new QRadioButton(this);
    STQradioButton->setObjectName(QString::fromUtf8("STQradioButton"));
    STQradioButton->setGeometry(QRect(20, 190, 117, 22));
    JAVADradioButton = new QRadioButton(this);
    JAVADradioButton->setObjectName(QString::fromUtf8("JAVADradioButton"));
    JAVADradioButton->setGeometry(QRect(130, 70, 117, 22));
    NVSradioButton = new QRadioButton(this);
    NVSradioButton->setObjectName(QString::fromUtf8("NVSradioButton"));
    NVSradioButton->setGeometry(QRect(130, 100, 117, 22));
    BINEXradioButton = new QRadioButton(this);
    BINEXradioButton->setObjectName(QString::fromUtf8("BINEXradioButton"));
    BINEXradioButton->setGeometry(QRect(130, 130, 117, 22));
    RTCM3OutradioButton = new QRadioButton(this);
    RTCM3OutradioButton->setObjectName(QString::fromUtf8("RTCM3OutradioButton"));
    RTCM3OutradioButton->setGeometry(QRect(280, 40, 117, 22));
    InStreamlineEdit = new QLineEdit(this);
    InStreamlineEdit->setObjectName(QString::fromUtf8("InStreamlineEdit"));
    InStreamlineEdit->setGeometry(QRect(60, 14, 113, 27));
    QFont font;
    font.setPointSize(9);
    font.setBold(true);
    font.setWeight(75);
    InStreamlineEdit->setFont(font);
    InStreamlineEdit->setAlignment(Qt::AlignCenter);
    InStreamlineEdit_2 = new QLineEdit(this);
    InStreamlineEdit_2->setObjectName(QString::fromUtf8("InStreamlineEdit_2"));
    InStreamlineEdit_2->setGeometry(QRect(240, 14, 141, 27));
    QFont font1;
    font1.setPointSize(10);
    font1.setBold(true);
    font1.setWeight(75);
    InStreamlineEdit_2->setFont(font1);
    InStreamlineEdit_2->setAlignment(Qt::AlignCenter);
    pushButtonDefault1 = new QPushButton(this);
    pushButtonDefault1->setObjectName(QString::fromUtf8("pushButtonDefault1"));
    pushButtonDefault1->setGeometry(QRect(660, 220, 99, 51));
    pushButtonDefault2 = new QPushButton(this);
    pushButtonDefault2->setObjectName(QString::fromUtf8("pushButtonDefault2"));
    pushButtonDefault2->setGeometry(QRect(660, 280, 99, 51));
    textEditDefault2 = new QTextEdit(this);
    textEditDefault2->setObjectName(QString::fromUtf8("textEditDefault2"));
    textEditDefault2->setGeometry(QRect(20, 280, 611, 51));
    textEditDefault1 = new QTextEdit(this);
    textEditDefault1->setObjectName(QString::fromUtf8("textEditDefault1"));
    textEditDefault1->setGeometry(QRect(20, 230, 611, 31));

}

void OptionsBaseRtk::retranslateUi()
{
    this->setWindowTitle(QApplication::translate("OptionsStr2str", "Dialog", 0));
    RTCM2radioButton->setText(QApplication::translate("OptionsStr2str", "RTCM2", 0));
    RTCM3radioButton->setText(QApplication::translate("OptionsStr2str", "RTCM3", 0));
    NOVradioButton->setText(QApplication::translate("OptionsStr2str", "NOVATEL", 0));
    OEM3radioButton->setText(QApplication::translate("OptionsStr2str", "OEM&3", 0));
    UBXradioButton->setText(QApplication::translate("OptionsStr2str", "UBX", 0));
    SS2radioButton->setText(QApplication::translate("OptionsStr2str", "SS&2", 0));
    HEMISradioButton->setText(QApplication::translate("OptionsStr2str", "&HEMIS", 0));
    STQradioButton->setText(QApplication::translate("OptionsStr2str", "ST&Q", 0));
    JAVADradioButton->setText(QApplication::translate("OptionsStr2str", "JAVAD", 0));
    NVSradioButton->setText(QApplication::translate("OptionsStr2str", "N&VS", 0));
    BINEXradioButton->setText(QApplication::translate("OptionsStr2str", "&BINEX", 0));
    RTCM3OutradioButton->setText(QApplication::translate("OptionsStr2str", "RTCM3", 0));
    InStreamlineEdit->setText(QApplication::translate("OptionsStr2str", "INPUT STREAM", 0));
    InStreamlineEdit_2->setText(QApplication::translate("OptionsStr2str", "OUTPUT STREAM", 0));
    pushButtonDefault1->setText(QApplication::translate("OptionsStr2str", "default 1", 0));
    pushButtonDefault2->setText(QApplication::translate("OptionsStr2str", "default 2", 0));
    textEditDefault2->setHtml(QApplication::translate("OptionsStr2str", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
                                                      "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
                                                      "p, li { white-space: pre-wrap; }\n"
                                                      "</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
                                                      "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">&quot;-in&quot;,&quot;serial://ttyACM0:115200:8:n:1:#ubx&quot;,&quot;-out&quot;,&quot;serial://ttyUSB0:57600:8:n:1:#RTCM3&quot;,&quot;-msg&quot;,&quot;1004,1019,1012,1020,1006,1008&quot;</span></p></body></html>", 0));
    textEditDefault1->setHtml(QApplication::translate("OptionsStr2str", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
                                                      "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
                                                      "p, li { white-space: pre-wrap; }\n"
                                                      "</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
                                                      "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">&quot;-in&quot;,&quot;serial://ttyACM0:115200:8:n:1:#ubx&quot;,&quot;-msg&quot;,&quot;1004,1019,1012,1020,1006,1008&quot;</span></p></body></html>", 0));

}
