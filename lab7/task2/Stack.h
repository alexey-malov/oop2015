#pragma once

template <typename T>
class CStack
{
public:

	struct Item
	{
		// ����������� �������� ���������, ��� ���������� �.�. perfect forwarding
		// � ������, ����� ���������� �������� rvalue, �������� ����� ����������
		// � ��������� ������ - �����������
		template <typename TT>
		Item(TT && value, std::unique_ptr<Item> && previous)
			: value(std::forward<T>(value))
			, previous(std::move(previous))
		{}

		T value;
		std::unique_ptr<Item> previous;
	};

	bool IsEmpty() const
	{
		return !m_top;
	}

	// ����� Push �������� ���������, ��� ���������� �.�. perfect forwarding
	// � ������, ����� ���������� �������� rvalue, �������� ����� ����������
	// � ��������� ������ - �����������
	template <typename TT>
	void Push(TT && value)
	{
		m_top = std::make_unique<Item>(std::forward<T>(value), move(m_top));
	}

private:
	std::unique_ptr<Item> m_top;
};

