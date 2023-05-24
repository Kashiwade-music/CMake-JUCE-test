#pragma once
/*
This is a custom library that can be used like the JUCE DSP module. It is a DSP
that swaps the L channel and R channel.
*/

template <typename SampleType>
class LRFlip : public juce::dsp::ProcessorBase {
 public:
  LRFlip() = default;
  ~LRFlip() = default;

  //==============================================================================
  void prepare(const juce::dsp::ProcessSpec &spec) override;
  //==============================================================================
  void process(const juce::dsp::ProcessContextReplacing<SampleType>
                   &context) noexcept override;

  //==============================================================================
  void reset() noexcept override;
};
