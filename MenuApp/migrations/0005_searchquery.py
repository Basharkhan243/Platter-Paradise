# Generated by Django 5.1.2 on 2025-01-01 13:33

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('MenuApp', '0004_rename_image_imagedata_imageval'),
    ]

    operations = [
        migrations.CreateModel(
            name='SearchQuery',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('query', models.CharField(default='', max_length=200)),
                ('created_at', models.DateTimeField(auto_now_add=True)),
            ],
        ),
    ]