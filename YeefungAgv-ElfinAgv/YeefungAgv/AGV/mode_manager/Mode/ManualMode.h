�}o  X  ��[�T�o��u
��ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�@���_e���Ǝ>��J�ڽ~lqh�x�)m;�:�9A��V�oHO�"�X���	K|z䎕Q��fw�']`�o��Wb�sllG׼ˠ�W.g�6b��߼4�c8��� Pj��Mw3�T�DݺP�;!���Q`�|B!��q�Լ�����1������>��E�m��ڨ\�s
qab�t
�Myv֕�ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql*|=,�,ӗ:w���9aJJ���M�I���2���'�F�ƌ��r^�@SK����!��FC���7�^����{�?tD�)��M��@j7ҟ0�ь*޹TO��JS���3�d�<��y�$#TM��jQҝ����/�;�:��c�;˸ a<�ͬms	��{kfo��mH�SG��32�Q,'�V��`*��umv���'�`�~�PCNGpP(�4WO8AF<��<�ͥEӹW����$q�&Ҋ���s8Jv2t��DI���"���<��CcnoǺgz�в<_x(��~ǥf�Q�@�Z���2f�N�(��R�#垜Z"�������f��"�k��b B�e΢�шoY����x!�*��-�UUOŠU{�(%��=�E[CF�;0o �A�_�I�w<�O�5{d��z�_=�D�{�Ż\%:J���I:^�ȴD�qby�q�9�\�,�!m��������r(���E�W q'��+��1UX��e�Y�w�����{�=���9��d CmdAnalysis(Cmd cmd);
	int CommProcess(void *arg);
	
	int CmdProcess(void *arg);
	
	bool LineDrive();

private:
	CThread<ManualMode> _operationProcThread;
	CThread<ManualMode> _commThread;

	DevicesManager* _deviceMgr;		//����豸������
	CommManager* _commMgr;
	ParameterConfigManager* _paramCfgMgr;
	AgvInfo* _agvInfo;
	MotionController* _motionController;
};

#endif // __MODE_MANUALMODE_H__
