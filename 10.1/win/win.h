// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� WIN_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// WIN_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef WIN_EXPORTS
#define WIN_API __declspec(dllexport)
#else
#define WIN_API __declspec(dllimport)
#endif

// �����Ǵ� win.dll ������
class WIN_API Cwin {
public:
	Cwin(void);
	// TODO:  �ڴ�������ķ�����
};

extern WIN_API int nwin;

WIN_API int fnwin(void);
WIN_API int factorial(int n);
WIN_API float convert(float deg);