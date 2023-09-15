from setuptools import find_packages, setup

package_name = 'robot_math_pkg'

setup(
    name=package_name,
    version='0.1.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='shin',
    maintainer_email='shinmk9476@gamil.com',
    description='Go to goal of turtle Package description',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'goto_goal = robot_math_pkg.goto_goal:main',
                 
        ],
    },
)
