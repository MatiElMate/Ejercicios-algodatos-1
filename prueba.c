#include <windows.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    static HWND hEdit;  // Variable para el control de edición

    switch (uMsg) {
        case WM_CREATE:
            // Crear el control de edición
            hEdit = CreateWindowEx(
                0,                              // Estilo extendido
                "EDIT",                         // Clase de ventana
                "",                             // Texto inicial
                WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL, // Estilos
                10, 10, 200, 25,               // Posición y tamaño
                hwnd,                           // Ventana padre
                NULL,                           // ID del control
                NULL,                           // Manejo de instancia
                NULL                            // Datos adicionales
            );
            return 0;

        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;

        case WM_PAINT:
            {
                PAINTSTRUCT ps;
                HDC hdc = BeginPaint(hwnd, &ps);
                FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW + 1));
                EndPaint(hwnd, &ps);
            }
            return 0;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    const char CLASS_NAME[] = "MiClaseDeVentana";

    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(0, CLASS_NAME, "¡Hola, mundo!", WS_OVERLAPPEDWINDOW,
                                CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
                                NULL, NULL, hInstance, NULL);

    ShowWindow(hwnd, nCmdShow);

    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
