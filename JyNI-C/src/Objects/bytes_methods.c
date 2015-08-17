/* This File is based on bytes_methods.c from CPython 2.7 (latest repository version).
 * It has been modified to suit JyNI needs.
 * Note that this file was generated by JyNIgate and its source is hosted in the
 * JyNIgate project. Modifying this generated file is not recommended.
 *
 * Copyright of the original file:
 * Copyright (c) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010,
 * 2011, 2012, 2013, 2014, 2015 Python Software Foundation.  All rights reserved.
 *
 * Copyright of JyNI:
 * Copyright (c) 2013, 2014, 2015 Stefan Richthofer.  All rights reserved.
 *
 *
 * This file is part of JyNI.
 *
 * JyNI is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * JyNI is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with JyNI.  If not, see <http://www.gnu.org/licenses/>.
 */


#include "JyNI.h"
#include "bytes_methods_JyNI.h"

PyDoc_STRVAR_shared(_Py_isspace__doc__,
"B.isspace() -> bool\n\
\n\
Return True if all characters in B are whitespace\n\
and there is at least one character in B, False otherwise.");

PyObject*
_Py_bytes_isspace(const char *cptr, Py_ssize_t len)
{
	register const unsigned char *p
		= (unsigned char *) cptr;
	register const unsigned char *e;

	/* Shortcut for single character strings */
	if (len == 1 && Py_ISSPACE(*p))
		Py_RETURN_TRUE;

	/* Special case for empty strings */
	if (len == 0)
		Py_RETURN_FALSE;

	e = p + len;
	for (; p < e; p++) {
		if (!Py_ISSPACE(*p))
			Py_RETURN_FALSE;
	}
	Py_RETURN_TRUE;
}


PyDoc_STRVAR_shared(_Py_isalpha__doc__,
"B.isalpha() -> bool\n\
\n\
Return True if all characters in B are alphabetic\n\
and there is at least one character in B, False otherwise.");

PyObject*
_Py_bytes_isalpha(const char *cptr, Py_ssize_t len)
{
	register const unsigned char *p
		= (unsigned char *) cptr;
	register const unsigned char *e;

	/* Shortcut for single character strings */
	if (len == 1 && Py_ISALPHA(*p))
		Py_RETURN_TRUE;

	/* Special case for empty strings */
	if (len == 0)
		Py_RETURN_FALSE;

	e = p + len;
	for (; p < e; p++) {
		if (!Py_ISALPHA(*p))
			Py_RETURN_FALSE;
	}
	Py_RETURN_TRUE;
}


PyDoc_STRVAR_shared(_Py_isalnum__doc__,
"B.isalnum() -> bool\n\
\n\
Return True if all characters in B are alphanumeric\n\
and there is at least one character in B, False otherwise.");

PyObject*
_Py_bytes_isalnum(const char *cptr, Py_ssize_t len)
{
	register const unsigned char *p
		= (unsigned char *) cptr;
	register const unsigned char *e;

	/* Shortcut for single character strings */
	if (len == 1 && Py_ISALNUM(*p))
		Py_RETURN_TRUE;

	/* Special case for empty strings */
	if (len == 0)
		Py_RETURN_FALSE;

	e = p + len;
	for (; p < e; p++) {
		if (!Py_ISALNUM(*p))
			Py_RETURN_FALSE;
	}
	Py_RETURN_TRUE;
}


PyDoc_STRVAR_shared(_Py_isdigit__doc__,
"B.isdigit() -> bool\n\
\n\
Return True if all characters in B are digits\n\
and there is at least one character in B, False otherwise.");

PyObject*
_Py_bytes_isdigit(const char *cptr, Py_ssize_t len)
{
	register const unsigned char *p
		= (unsigned char *) cptr;
	register const unsigned char *e;

	/* Shortcut for single character strings */
	if (len == 1 && Py_ISDIGIT(*p))
		Py_RETURN_TRUE;

	/* Special case for empty strings */
	if (len == 0)
		Py_RETURN_FALSE;

	e = p + len;
	for (; p < e; p++) {
		if (!Py_ISDIGIT(*p))
			Py_RETURN_FALSE;
	}
	Py_RETURN_TRUE;
}


PyDoc_STRVAR_shared(_Py_islower__doc__,
"B.islower() -> bool\n\
\n\
Return True if all cased characters in B are lowercase and there is\n\
at least one cased character in B, False otherwise.");

PyObject*
_Py_bytes_islower(const char *cptr, Py_ssize_t len)
{
	register const unsigned char *p
		= (unsigned char *) cptr;
	register const unsigned char *e;
	int cased;

	/* Shortcut for single character strings */
	if (len == 1)
		return PyBool_FromLong(Py_ISLOWER(*p));

	/* Special case for empty strings */
	if (len == 0)
		Py_RETURN_FALSE;

	e = p + len;
	cased = 0;
	for (; p < e; p++) {
		if (Py_ISUPPER(*p))
			Py_RETURN_FALSE;
		else if (!cased && Py_ISLOWER(*p))
			cased = 1;
	}
	return PyBool_FromLong(cased);
}


PyDoc_STRVAR_shared(_Py_isupper__doc__,
"B.isupper() -> bool\n\
\n\
Return True if all cased characters in B are uppercase and there is\n\
at least one cased character in B, False otherwise.");

PyObject*
_Py_bytes_isupper(const char *cptr, Py_ssize_t len)
{
	register const unsigned char *p
		= (unsigned char *) cptr;
	register const unsigned char *e;
	int cased;

	/* Shortcut for single character strings */
	if (len == 1)
		return PyBool_FromLong(Py_ISUPPER(*p));

	/* Special case for empty strings */
	if (len == 0)
		Py_RETURN_FALSE;

	e = p + len;
	cased = 0;
	for (; p < e; p++) {
		if (Py_ISLOWER(*p))
			Py_RETURN_FALSE;
		else if (!cased && Py_ISUPPER(*p))
			cased = 1;
	}
	return PyBool_FromLong(cased);
}


PyDoc_STRVAR_shared(_Py_istitle__doc__,
"B.istitle() -> bool\n\
\n\
Return True if B is a titlecased string and there is at least one\n\
character in B, i.e. uppercase characters may only follow uncased\n\
characters and lowercase characters only cased ones. Return False\n\
otherwise.");

PyObject*
_Py_bytes_istitle(const char *cptr, Py_ssize_t len)
{
	register const unsigned char *p
		= (unsigned char *) cptr;
	register const unsigned char *e;
	int cased, previous_is_cased;

	/* Shortcut for single character strings */
	if (len == 1)
		return PyBool_FromLong(Py_ISUPPER(*p));

	/* Special case for empty strings */
	if (len == 0)
		Py_RETURN_FALSE;

	e = p + len;
	cased = 0;
	previous_is_cased = 0;
	for (; p < e; p++) {
		register const unsigned char ch = *p;

		if (Py_ISUPPER(ch)) {
			if (previous_is_cased)
				Py_RETURN_FALSE;
			previous_is_cased = 1;
			cased = 1;
		}
		else if (Py_ISLOWER(ch)) {
			if (!previous_is_cased)
				Py_RETURN_FALSE;
			previous_is_cased = 1;
			cased = 1;
		}
		else
			previous_is_cased = 0;
	}
	return PyBool_FromLong(cased);
}


PyDoc_STRVAR_shared(_Py_lower__doc__,
"B.lower() -> copy of B\n\
\n\
Return a copy of B with all ASCII characters converted to lowercase.");

void
_Py_bytes_lower(char *result, const char *cptr, Py_ssize_t len)
{
		Py_ssize_t i;

		/*
		newobj = PyString_FromStringAndSize(NULL, len);
		if (!newobj)
				return NULL;

		s = PyString_AS_STRING(newobj);
		*/

		Py_MEMCPY(result, cptr, len);

		for (i = 0; i < len; i++) {
				int c = Py_CHARMASK(result[i]);
				if (Py_ISUPPER(c))
						result[i] = Py_TOLOWER(c);
		}
}


PyDoc_STRVAR_shared(_Py_upper__doc__,
"B.upper() -> copy of B\n\
\n\
Return a copy of B with all ASCII characters converted to uppercase.");

void
_Py_bytes_upper(char *result, const char *cptr, Py_ssize_t len)
{
		Py_ssize_t i;

		/*
		newobj = PyString_FromStringAndSize(NULL, len);
		if (!newobj)
				return NULL;

		s = PyString_AS_STRING(newobj);
		*/

		Py_MEMCPY(result, cptr, len);

		for (i = 0; i < len; i++) {
				int c = Py_CHARMASK(result[i]);
				if (Py_ISLOWER(c))
						result[i] = Py_TOUPPER(c);
		}
}


PyDoc_STRVAR_shared(_Py_title__doc__,
"B.title() -> copy of B\n\
\n\
Return a titlecased version of B, i.e. ASCII words start with uppercase\n\
characters, all remaining cased characters have lowercase.");

void
_Py_bytes_title(char *result, char *s, Py_ssize_t len)
{
		Py_ssize_t i;
		int previous_is_cased = 0;

		/*
		newobj = PyString_FromStringAndSize(NULL, len);
		if (newobj == NULL)
				return NULL;
		s_new = PyString_AsString(newobj);
		*/
		for (i = 0; i < len; i++) {
				int c = Py_CHARMASK(*s++);
				if (Py_ISLOWER(c)) {
						if (!previous_is_cased)
							c = Py_TOUPPER(c);
						previous_is_cased = 1;
				} else if (Py_ISUPPER(c)) {
						if (previous_is_cased)
							c = Py_TOLOWER(c);
						previous_is_cased = 1;
				} else
						previous_is_cased = 0;
				*result++ = c;
		}
}


PyDoc_STRVAR_shared(_Py_capitalize__doc__,
"B.capitalize() -> copy of B\n\
\n\
Return a copy of B with only its first character capitalized (ASCII)\n\
and the rest lower-cased.");

void
_Py_bytes_capitalize(char *result, char *s, Py_ssize_t len)
{
		Py_ssize_t i;

		/*
		newobj = PyString_FromStringAndSize(NULL, len);
		if (newobj == NULL)
				return NULL;
		s_new = PyString_AsString(newobj);
		*/
		if (0 < len) {
				int c = Py_CHARMASK(*s++);
				if (Py_ISLOWER(c))
						*result = Py_TOUPPER(c);
				else
						*result = c;
				result++;
		}
		for (i = 1; i < len; i++) {
				int c = Py_CHARMASK(*s++);
				if (Py_ISUPPER(c))
						*result = Py_TOLOWER(c);
				else
						*result = c;
				result++;
		}
}


PyDoc_STRVAR_shared(_Py_swapcase__doc__,
"B.swapcase() -> copy of B\n\
\n\
Return a copy of B with uppercase ASCII characters converted\n\
to lowercase ASCII and vice versa.");

void
_Py_bytes_swapcase(char *result, char *s, Py_ssize_t len)
{
		Py_ssize_t i;

		/*
		newobj = PyString_FromStringAndSize(NULL, len);
		if (newobj == NULL)
				return NULL;
		s_new = PyString_AsString(newobj);
		*/
		for (i = 0; i < len; i++) {
				int c = Py_CHARMASK(*s++);
				if (Py_ISLOWER(c)) {
						*result = Py_TOUPPER(c);
				}
				else if (Py_ISUPPER(c)) {
						*result = Py_TOLOWER(c);
				}
				else
						*result = c;
				result++;
		}
}
