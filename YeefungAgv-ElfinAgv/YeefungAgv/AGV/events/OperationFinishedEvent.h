�}�o  �  ���Q���T��u
��)ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5��-#�g+�0OL@�D�d.���_�4j�$@� �cyH�ŊE���x4Ua,�I��vKHU��[l�Oņ���,�t������>AL�E�8a
Z:�!%�w�����H%]��D��b��EW���;��$��1���(�B��~!-B��f���!U��Z��9�)��?��>���T"��wO��'F�D؜�0BXEG{-�S�$�K2�	W��b�"�|�a��1�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q****************/
#ifndef __EVENTS_OPERATIONFINISHEDEVENT_H__
#define __EVENTS_OPERATIONFINISHEDEVENT_H__

#include "event_bus\Event.h"

class OperationFinishedEvent : public Event
{
public:
	OperationFinishedEvent() {}
	~OperationFinishedEvent() {}

	AgvID_t agvId;
	TaskId_t taskId;
	int opResult;
	int opCode;
};


#endif // __EVENTS_OPERATIONFINISHEDEVENT_H__