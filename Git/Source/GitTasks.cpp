/*
    Copyright (c) 2020 Xavier Leclercq
    Released under the MIT License
    See https://github.com/CodeSmithyIDE/VersionControl/blob/master/LICENSE.txt
*/

#include "GitTasks.h"

namespace CodeSmithy
{
    
std::unique_ptr<Task> GitTasks::CreateInitTask(GitRepository& repository, const std::string& path)
{
    return repository.init(path);
}

}