#ifndef ACTIONVIEWER_H
#define ACTIONVIEWER_H

#include "editors/viewer.h"
#include "widgets/elidedlabel.h"
#include <QBoxLayout>
#include <QPushButton>

class ActionViewer : public Viewer
{
    Q_OBJECT

public:
    explicit ActionViewer(QWidget *parent = nullptr);
    void setTitle(const QString &title);

protected:
    QPushButton *addButton(const QString &title = QString());
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:
    QVBoxLayout *layout;
    ElidedLabel *label;
};

#endif // ACTIONVIEWER_H