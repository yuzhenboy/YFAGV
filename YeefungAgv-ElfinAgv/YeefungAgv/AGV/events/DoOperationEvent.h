�}9o  �  h�U�����u
��Hʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�`�����+���΀���﷦�^�j��+�wF��\"���J�Q�O�6�n�U+ж���0��]Cm�m�E�J7�λ'�4 �)��%��ҩ�G~��a�j�aa��ϭay��2E����F�8!,���Ly��k�n����� ��@@�́<,=&'���Y��]��v|�ͧL�Z�I%�����65�ȍ�_���H�N>�(��Ɩ�\7М��QMt�ͫ<�4��[��ص�[$<N�&u�= �.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q�
*
* �޸����ڣ�
* ���ߣ�
* ˵����
*********************************************************************/
#ifndef __EVENTS_DOOPERATIONEVENT_H__
#define __EVENTS_DOOPERATIONEVENT_H__

#include "event_bus\Event.h"

class DoOperationEvent : public Event
{
public:
	DoOperationEvent() {}
	~DoOperationEvent() {}

	AgvID_t agvId;
	TaskId_t taskId;
	int opCode;
};


#endif // __EVENTS_DOOPERATIONEVENT_H__