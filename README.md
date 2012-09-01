Mac-ward Compatibility
======================

The Mac-ward Compatibility project restores compatibility between different
versions of the Mac OS development headers.

Issues include:

* Type aliases SRefCon, URefCon, and PRefCon were added to the 10.5 SDK for
64-bit support.  Making your code 64-bit-compatible requires using these
types, which then makes it incompatible with the 10.4 SDK and earlier.

* The 10.7 SDK omits QuickDraw symbols from the headers even for 32-bit
development.

Mac-ward Compatibility defines the missing symbols.

