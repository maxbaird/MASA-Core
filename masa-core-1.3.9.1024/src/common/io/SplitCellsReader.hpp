/*******************************************************************************
 *
 * Copyright (c) 2010-2015   Edans Sandes
 *
 * This file is part of MASA-Core.
 * 
 * MASA-Core is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * MASA-Core is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with MASA-Core.  If not, see <http://www.gnu.org/licenses/>.
 *
 ******************************************************************************/

#ifndef SPLITCELLSREADER_HPP_
#define SPLITCELLSREADER_HPP_

#include "SeekableCellsReader.hpp"

class SplitCellsReader: public SeekableCellsReader {
public:
	SplitCellsReader(SeekableCellsReader* reader, int pos0, bool closeAfterUse);
	virtual ~SplitCellsReader();
	virtual void seek(int offset);
	virtual int getOffset();
	virtual void close();
	virtual int getType();
	virtual int read(cell_t* buf, int len);

private:
	SeekableCellsReader* reader;
	int pos0;
	bool closeAfterUse;
};

#endif /* SPLITCELLSREADER_HPP_ */
