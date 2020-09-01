#ifndef DINGVOICE_H
#define DINGVOICE_H

#include <QObject>
#include <QSound>

class DingVoice : public QObject
{
    Q_OBJECT
public:
    explicit DingVoice(QObject *parent = nullptr);
    ~DingVoice();

signals:

public slots:
    void dingVoice();

private:
    int state = 0;
    QSound *sound = nullptr;
};

#endif // DINGVOICE_H
