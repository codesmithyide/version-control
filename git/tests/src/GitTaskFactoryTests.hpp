// SPDX-FileCopyrightText: 2015-2024 Xavier Leclercq
// SPDX-License-Identifier: MIT

#ifndef GUARD_CODESMITHYIDE_VERSIONCONTROL_GIT_TESTS_GITTASKFACTORYTESTS_HPP
#define GUARD_CODESMITHYIDE_VERSIONCONTROL_GIT_TESTS_GITTASKFACTORYTESTS_HPP

#include <Ishiko/TestFramework.hpp>

class GitTaskFactoryTests : public Ishiko::TestSequence
{
public:
    GitTaskFactoryTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void CreateInitTaskTest1(Ishiko::Test& test);
    static void CreateCloneTaskTest1(Ishiko::Test& test);
    static void CreateCloneTaskTest2(Ishiko::Test& test);
    static void CreateOpenTaskTest1(Ishiko::Test& test);
};

#endif
