/*
  ==============================================================================

    PropertiesPanel.h
    Created: 4 Sep 2016 12:27:36am
    Author:  SwingCoder

  ==============================================================================
*/

#ifndef SYSTEMSETUPPANEL_H_INCLUDED
#define SYSTEMSETUPPANEL_H_INCLUDED


//==============================================================================
/** One of the child-Comp of EditAndPreview, for edit the properties of a Markdown doc.

    The properties will be the metas of html which auto-generated by the MD-doc.
*/
class SystemSetupPanel    : public Component
{
public:
    SystemSetupPanel();
    ~SystemSetupPanel();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SystemSetupPanel)
};


#endif  // SYSTEMSETUPPANEL_H_INCLUDED
