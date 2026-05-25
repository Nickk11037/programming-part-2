#ifndef QUEUEITEM_H
#define QUEUEITEM_H

template<typename Key, typename Value>
class QueueItem {
private:
    Key key;
    Value value;

public:
    QueueItem(Key k, Value v) {
        key = k;
        value = v;
    }

    Key getKey() const {
        return key;
    }

    Value getValue() const {
        return value;
    }
};

#endif