�}9o  �  k�$HE��u
��ʣ�:�.���<zx;����b��9KJ����V�1I� oA闠�s���͍I^�4�C����h�������W<hS6]�/rK�b�K0�� Z�A��[b��	&�Lh�t��5��Ԡ"�1�.�=~eCo��jiz:�H�!KҖ��`ZH���Rpl�ȼ«����&.��7�i�p�DMG�����0Ͼ3`����H�O=��
>$؏�9d#!+>�� 	��������e�LO�ywZ�*�C,e��"F_w�{��C?�=�3�V���[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q_

#include "event_bus/Event.h"

enum MoveResult
{
	Move_OK = 1,
	Move_Error,
	Move_NoPath,
};

class MoveFinishedEvent : public Event
{
public:
	MoveFinishedEvent() {}
	~MoveFinishedEvent() {}

	TaskId_t taskId;
	int opCode;
	MoveResult moveResult;
};



#endif // __EVENTS_MOVEFINISHEDEVENT_H__