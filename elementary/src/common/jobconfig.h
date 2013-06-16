/*
    Copyright 2013 <copyright holder> <email>

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/


#ifndef JOBCONFIG_H
#define JOBCONFIG_H

#include <common/include.h>

class JobConfig
{
  
public:
  
  std::string filename_variables;
  
  std::string filename_factors;
  
  std::string filename_models;
  
  std::string workdir;
  
  int frame_size_in_byte;
  
  long buffer_size_in_byte;
  
  JobConfig(){}
  
  JobConfig( const JobConfig& other )
  {
    this->filename_variables = "" + other.filename_variables;
    this->filename_factors = "" + other.filename_factors;
    this->filename_models = "" + other.filename_models;
    this->workdir = "" + other.workdir;
    this->frame_size_in_byte = other.frame_size_in_byte;
    this->buffer_size_in_byte = other.buffer_size_in_byte;
  }
  
  
};

#endif // JOBCONFIG_H
