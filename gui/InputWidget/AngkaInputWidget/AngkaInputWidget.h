#include <qt5/QtWidgets/QWidget>
#include <qt5/QtWidgets/QLineEdit>
#include <qt5/QtWidgets/QLabel>
#include <qt5/QtWidgets/QHBoxLayout>
#include <qt5/QtCore/QString>

class AngkaInputWidget : public QWidget {
    Q_OBJECT
    
    private:
        QLineEdit *lineEdit;
        QLabel *label;
        QHBoxLayout *layout;

    public:
        explicit AngkaInputWidget(QString label, QWidget *parent = 0);

    signals:
    public slots:

};