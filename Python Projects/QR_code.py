import qrcode
link = 'https://portfolio-of-wasiq.vercel.app/'
qr = qrcode.QRCode(version=1, box_size=5, border=5)
qr.add_data(link)
qr.make()
img = qr.make_image(fill_color = 'black', back_color = 'white')
img.save('qr.png')
