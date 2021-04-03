function [ctrl_info] = Formulate_NLP(dyn_info,ctrl_info,ref_info,constr_info)

if ctrl_info.type == "IO"
    [ctrl_info] = Formulate_NLP_IO(dyn_info,ctrl_info,ref_info,constr_info);
end

end