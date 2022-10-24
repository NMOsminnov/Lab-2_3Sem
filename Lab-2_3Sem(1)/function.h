#ifndef FUNCTION_H
#define FUNCTION_H

// ��������� �������

bool checkFile(              //�������, ����������� ������� ������
    const char* FILE_NAME_IN //��� �����
);

// ������� ��������� �������������������
void* allRandom( // ������� ����������� ��������� ������������������
    int* arr, // ������
    int& size, // ���������� ���������
    int& interval, // ��������
    int& minLimitation, // ����������� �� ����������� �����
    int& maxLimitation // ����������� �� ������������ �����
);

void* allRandom( // ������� ����������� ��������� ������������������
    float* arr, // ������
    int& size, // ���������� ���������
    int& interval, // ��������
    float& minLimitation, // ����������� �� ����������� �����
    float& maxLimitation // ����������� �� ������������ �����
);

void* upRegularize( // ������� ����������� ������������� ������������������ �� �����������
    int* arr, // ������
    int& size, // ���������� ���������
    int& interval, // ��������
    int& minLimitation, // ����������� �� ����������� �����
    int& maxLimitation // ����������� �� ������������ �����
);

void* upRegularize( // ������� ����������� ������������� ������������������ �� �����������
    float* arr, // ������
    int& size, // ���������� ���������
    int& interval, // ��������
    float& minLimitation, // ����������� �� ����������� �����
    float& maxLimitation // ����������� �� ������������ �����
);

// ������� ���������� �������������������

// �������� Better Linear Search
int betterLinearSearch(int* arr, int& size, int& key, int& count);
int betterLinearSearch(float* arr, int& size, int& key, int& count);

// �������� Sentinel Linear Search
int sentinelLinearSearch(int* arr, int& size, int& key, int& count);
int sentinelLinearSearch(float* arr, int& size, int& key, int& count);

// �������� ��������� ������
int binarySearch(int* arr, int& size, int& key, int& count);
int binarySearch(float* arr, int& size, int& key, int& count);

#endif