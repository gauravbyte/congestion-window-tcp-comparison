/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2014 Natale Patriciello, <natale.patriciello@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#include "TcpNewRenoCse.h"
#include "ns3/log.h"

namespace ns3 {

NS_LOG_COMPONENT_DEFINE ("TcpNewRenoCse");
NS_OBJECT_ENSURE_REGISTERED (TcpNewRenoCse);

TypeId
TcpNewRenoCse::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::TcpNewRenoCse")
    .SetParent<TcpNewReno> ()
    .AddConstructor<TcpNewRenoCse> ()
    .SetGroupName ("Internet")
  ;
  return tid;
}

TcpNewRenoCse::TcpNewRenoCse (void)
  : TcpNewReno ()

{
  NS_LOG_FUNCTION (this);
}

TcpNewRenoCse::TcpNewRenoCse (const TcpNewRenoCse& sock)
  : TcpNewReno (sock)
{
  NS_LOG_FUNCTION (this);
}

TcpNewRenoCse::~TcpNewRenoCse (void)
{
  NS_LOG_FUNCTION (this);
}

Ptr<TcpCongestionOps>
TcpNewRenoCse::Fork (void)
{
  return CopyObject<TcpNewRenoCse> (this);
}

 void 
TcpNewRenoCse::CongestionAvoidance (Ptr<TcpSocketState> tcb, uint32_t segmentsAcked)
{
  NS_LOG_FUNCTION (this << tcb << segmentsAcked);

  if (segmentsAcked > 0)
    {
      tcb->m_cWnd +=static_cast<uint32_t>  (tcb->m_segmentSize)*0.5;
      NS_LOG_INFO ("In CongAvoid, updated to cwnd " << tcb->m_cWnd <<
                   " ssthresh " << tcb->m_ssThresh);
    }
}

uint32_t
TcpNewRenoCse::SlowStart (Ptr<TcpSocketState> tcb, uint32_t segmentsAcked)
{
  NS_LOG_FUNCTION (this << tcb << segmentsAcked);

  if (segmentsAcked >= 1)
    {
      double adder = static_cast<double>( std::pow(tcb->m_segmentSize,1.9) )/ tcb->m_cWnd.Get ();
      adder = std::max (1.0, adder);
      tcb->m_cWnd += static_cast<uint32_t> (adder);

      NS_LOG_INFO ("In SlowStart, updated to cwnd " << tcb->m_cWnd << " ssthresh " << tcb->m_ssThresh);
      return segmentsAcked - 1;
    }

  return 0;
}


std::string
TcpNewRenoCse::GetName () const
{
  return "TcpNewRenoCse";
}

/**
 * \brief Get slow start threshold following HighSpeed principles
 *
 * \param tcb internal congestion state
 * \param bytesInFlight Bytes in flight
 *
 * \return the slow start threshold value
 */



} // namespace ns3
