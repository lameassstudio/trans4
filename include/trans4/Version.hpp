/// \copyright
///
/// See LICENSE.md in the distribution for the full license text including,
/// but not limited to, a notice of warranty and distribution rights.

#ifndef RPGTOOLKIT_TRANS4_VERSION_INCLUDED
#define RPGTOOLKIT_TRANS4_VERSION_INCLUDED

#include <string>
#include <ostream>

namespace rpgtoolkit {

    static const int RPGTOOLKIT_VERSION_MAJOR = 4;

    static const int RPGTOOLKIT_VERSION_MINOR = 0;

    static const int RPGTOOLKIT_VERSION_PATCH = 0;

    static const char RPGTOOLKIT_VERSION_RELEASE[] = "alpha";

    static const char RPGTOOLKIT_VERSION_METADATA[] = "";

    using std::string;
    using std::stringstream;

    /// Engine version information

    struct Version {

        Version(short major, short minor, short patch,
            string const & release, string const & metadata);

        Version(short major, short minor, short patch);

        short
        GetMajor() const;

        short
        GetMinor() const;

        short
        GetPatch() const;

        string const &
        GetRelease() const;

        string const &
        GetBuildMetadata() const;

        string const
        ToString() const;

    private:

        short major_;

        short minor_;

        short patch_;

        string release_;

        string metadata_;

    };

}

#endif