from unittest import TestCase
from paula.ext import Hello


class ExtensionTest(TestCase):
    def setUp(self):
        self.hello = Hello()

    def tearDown(self):
        pass

    def testExtensionClass(self):
        self.assertEqual('Hello Static Library!', self.hello.greet())
