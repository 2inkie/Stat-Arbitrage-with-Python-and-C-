# No need of this when using cmake
from pybind11.setup_helpers import build_ext, Pybind11Extension
from setuptools import setup

ext_modules = [
    Pybind11Extension(
        "backtest",
        ["src/backtest.cpp"]
    ),
]

setup(
    name = "backtest",
    ext_modules = ext_modules,
    cmdclass={"build_ext": build_ext}
)