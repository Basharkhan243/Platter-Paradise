# Generated by Django 5.1.2 on 2025-01-01 11:13

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('MenuApp', '0001_initial'),
    ]

    operations = [
        migrations.AddField(
            model_name='imagedata',
            name='imageName',
            field=models.CharField(default='default_image_name', max_length=100),
        ),
    ]