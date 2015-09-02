local Sigmoid = torch.class('zz.Sigmoid', 'zz.Module')

function Sigmoid:updateOutput(input)
   return input.zz.Sigmoid_updateOutput(self, input)
end

function Sigmoid:updateGradInput(input, gradOutput)
   return input.zz.Sigmoid_updateGradInput(self, input, gradOutput)
end
