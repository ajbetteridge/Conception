#pragma once
#ifndef __FolderListingWidget_H__
#define __FolderListingWidget_H__

class FolderListingWidget
  : public FlowLayoutWidget
{
public:
	FolderListingWidget(Vector2n Position, std::string Path, CompositeWidget & AddTo, TypingModule & TypingModule, Project & Project);
	~FolderListingWidget();

	void ProcessEvent(InputEvent & InputEvent) override;

private:
	FolderListingWidget(const FolderListingWidget &) = delete;
	FolderListingWidget & operator = (const FolderListingWidget &) = delete;

	FolderListingWidget * m_Child = nullptr;
};

void AddWidgetForPath(const std::string & FullPath, CompositeWidget & AddTo, TypingModule & TypingModule, Project & Project);
void AddWidgetForPath(const std::string & FullPath, CompositeWidget & AddTo, TypingModule & TypingModule, Project & Project, Vector2n Position);

#endif // __FolderListingWidget_H__
