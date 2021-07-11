#include <qt5/QtWidgets/QWidget>
#include <qt5/QtWidgets/QBoxLayout>
#include "AngkaInputWidget/AngkaInputWidget.h"

class InputWidget : public QWidget {
    Q_OBJECT

    private:
        AngkaInputWidget *inputXDot;
        AngkaInputWidget *inputYDot;
        AngkaInputWidget *inputTDot;

        QBoxLayout *layout;

    public:
        explicit InputWidget(QWidget *parent = 0);

};