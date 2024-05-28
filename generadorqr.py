import qrcode
respuesta = True
while respuesta:
# Solicita al usuario que ingrese un texto
    texto = input("Ingrese el texto para generar el código QR: ")

# Genera el código QR
    qr = qrcode.QRCode(
        version=1,
        error_correction=qrcode.constants.ERROR_CORRECT_L,
        box_size=10,
        border=1,
    )
    qr.add_data(texto)
    qr.make(fit=True)

# Crea una imagen del código QR
    img = qr.make_image(fill='black', back_color='white')

# Guarda la imagen
    img.save("codigo_qr.png")

    print("El código QR ha sido guardado como 'codigo_qr.png'")
    respuesta = input('crear nuevo qr')
    respuesta = respuesta == 'v'
