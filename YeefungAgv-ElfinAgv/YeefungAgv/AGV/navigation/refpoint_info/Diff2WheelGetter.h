�}Lo  �  Au~r���u
��"ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�`;�zT�*2����5�!��﷦�^�j��+�+�S�)�O��o�� �(����J���P����A=�\d� �;;��o�έE�U֊��M�Zk�"�u�&�y�t+���pI0U~���C5;Bt�B��ӹ��"���(P �#؊H�ti��1�7Zݹ���gs��L2ӄ2m�|O�D~m���62L*ւ��IԽ�+�:����a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qterConfigManager;

class Diff2WheelGetter : public RefPointInfoGetter
{
public:
	Diff2WheelGetter();
	~Diff2WheelGetter(void);

	void Start() override;
	RefPointInfo GetRefPointInfo() override;
	double GetRefPointDistance() override;

private:
	double _prevLeftDistance;
	double _prevRightDistance;
	MotionController* _motionController;
	ParameterConfigManager* _paramCfgMgr;
};
#endif // __NAVIGATION_DIFF2WHEELGETTER_H__
