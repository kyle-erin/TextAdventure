#pragma once

#include <string>

class Player
{
private:
  std::string m_name;
public:
  Player()
  { }

  Player(const std::string &name)
      : m_name(name)
  {
  }

  ~Player()
  { }

  void setName(const std::string &forename, const std::string &surname)
  {
    m_name = forename;
    m_name.append(" ");
    m_name.append(surname);
  }

  void setName(const std::string &name)
  {
    m_name = name;
  }

  void operator+=(const std::string& name)
  {
    m_name.append(name);
  }

  const std::string &getName() const
  {
    return m_name;
  }
};
