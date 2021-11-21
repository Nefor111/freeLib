#ifndef COVERLABEL_H
#define COVERLABEL_H

#include <QLabel>
#include <QObject>

#include "library.h"

class CoverLabel : public QLabel
{
public:
    CoverLabel(QWidget *parent);
    void setBook(SBook *pBook);
    QPixmap scaledPixmap() const;
    virtual QSize sizeHint() const;
protected:
    void resizeEvent(QResizeEvent *event);

private:
    QPixmap pix;
};

#endif // COVERLABEL_H