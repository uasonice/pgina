#pragma once

#include <Windows.h>
#include <string>
#include <Buffer.h>

namespace pGina
{
	namespace Memory
	{
		class BinaryReader
		{
		public:
			BinaryReader(Buffer &buffer)			  
			{
				m_buffer = buffer.Raw();
				m_bufferLength = buffer.Length();
				m_cursor = m_buffer;
			}

			BinaryReader(unsigned char * buffer, int length)
			{
				m_buffer = buffer;
				m_bufferLength = length;
				m_cursor = m_buffer;
			}

			int			  ReadInt32();
			unsigned char ReadByte();
			std::string   ReadString();
			bool		  ReadBool();

		private:
			unsigned char * m_buffer;
			unsigned char * m_cursor;
			int m_bufferLength;			
		};
	}
}