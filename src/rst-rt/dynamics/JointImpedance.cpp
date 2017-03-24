/* ============================================================
 *
 * This file is a part of RST-RT (CogIMon) project
 *
 * Copyright (C) 2016 by Dennis Leroy Wigand <dwigand at cor-lab dot uni-bielefeld dot de>
 *
 * This file may be licensed under the terms of the
 * GNU Lesser General Public License Version 3 (the ``LGPL''),
 * or (at your option) any later version.
 *
 * Software distributed under the License is distributed
 * on an ``AS IS'' basis, WITHOUT WARRANTY OF ANY KIND, either
 * express or implied. See the LGPL for the specific language
 * governing rights and limitations.
 *
 * You should have received a copy of the LGPL along with this
 * program. If not, go to http://www.gnu.org/licenses/lgpl.html
 * or write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The development of this software was supported by:
 *   CoR-Lab, Research Institute for Cognition and Robotics
 *     Bielefeld University
 *
 * ============================================================ */

#include "JointImpedance.hpp"

namespace rstrt {
namespace dynamics {

JointImpedance::JointImpedance() {
}

JointImpedance::JointImpedance(int size) {
    stiffness.resize(size);
    stiffness.fill(0);
    damping.resize(size);
    damping.fill(0);
}

std::ostream& operator<<(std::ostream& os, const JointImpedance& cd) {
    return os << cd.stiffness << cd.damping; // TODO check if this makes sense
}

std::istream& operator>>(std::istream& is, JointImpedance& cd) {
    return is;// >> cd.stiffness >> cd.damping; // TODO check if this makes sense
}

}
}
