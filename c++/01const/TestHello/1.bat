echo "������Ŀ��ʼ"


echo "��ʼ����DebugĿ¼"
del /s /q "Debug/"
rd "Debug/" /s /q 

echo "��ʼ����ReleaseĿ¼"
del /s /q "Release/"
rd "Release/" /s /q 

echo "��ʼ����GeneratedFilesĿ¼"
del /s /q "GeneratedFiles/"
rd "GeneratedFiles/" /s /q 

echo "��ʼ����Win32Ŀ¼"
del /s /q "Win32/"
rd "Win32/" /s /q 

echo "��ʼ����ipchĿ¼"
del /s /q "ipch/"
rd "ipch/" /s /q 

echo "��ʼ����DebugĿ¼"
del /s /q "TestHello/Debug/"
rd "TestHello/Debug/" /s /q 

echo "��ʼ����ReleaseĿ¼"
del /s /q "TestHello/Release/"
rd "TestHello/Release/" /s /q 

del *.sdf
del *.opensdf


echo "�������"

pause