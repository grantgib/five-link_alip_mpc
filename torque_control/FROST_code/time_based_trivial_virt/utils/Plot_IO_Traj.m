function [] = Plot_IO_Traj(Time,x_traj,X_REF_Original,u_cl,plot_q,plot_dq,plot_u,plot_title,args,save,save_dir,file_title,error)

wdr = 2; 
wd = 1.5;
sz = 15;
sim_time = 1;
if plot_q
    figure1=figure % plot q
    subplot(4,2,1);

     plot(Time,args.lbx(1,:),'LineStyle','--','color','r','LineWidth',wdr);    
     hold on; plot(Time,args.ubx(1,:),'LineStyle','--','color','r','LineWidth',wdr);    

     hold on; plot(Time,x_traj(1,:),'color','c','LineWidth',wd); title('$x$','interpreter','latex'); 
    grid on; set(gca,'FontSize',sz)
    
    subplot(4,2,2); 
 
    plot(Time,args.lbx(2,:),'LineStyle','--','color','r','LineWidth',wdr);    
     hold on; plot(Time,args.ubx(2,:),'LineStyle','--','color','r','LineWidth',wdr);
 
     hold on; plot(Time,x_traj(2,:),'color','c','LineWidth',wd); title('$z$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(4,2,3);
 plot(Time,args.lbx(3,:),'LineStyle','--','color','r','LineWidth',wdr);    
     hold on; plot(Time,args.ubx(3,:),'LineStyle','--','color','r','LineWidth',wdr);
 
     hold on; plot(Time,x_traj(3,:),'color','c','LineWidth',wd); title('$Rot_y$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(4,2,4);
 plot(Time,args.lbx(4,:),'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(4) args.ubx(4)],'LineStyle','--','color','r','LineWidth',wdr);
   
hold on; plot(Time,x_traj(4,:),'color','c','LineWidth',wd); title('$q1R$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
     subplot(4,2,5);
 plot(Time,args.lbx(5,:),'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(4) args.ubx(4)],'LineStyle','--','color','r','LineWidth',wdr);
 
hold on; plot(Time,x_traj(5,:),'color','c','LineWidth',wd); title('$q2R$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
     subplot(4,2,6);
 plot(Time,args.lbx(6,:),'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(4) args.ubx(4)],'LineStyle','--','color','r','LineWidth',wdr);
       
hold on; plot(Time,x_traj(6,:),'color','c','LineWidth',wd); title('$q1L$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
     subplot(4,2,7);
 plot(Time,args.lbx(7,:),'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(4) args.ubx(4)],'LineStyle','--','color','r','LineWidth',wdr);
       
hold on; plot(Time,x_traj(7,:),'color','c','LineWidth',wd); title('$q2L$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
 
    sgtitle(plot_title+" positions");
    set(gcf,'color','w');
end

if plot_dq 
    figure2=figure % plot q
    subplot(2,2,1);
    plot(Time,X_REF_Original(5,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
%     hold on; line([0 sim_time],[args.lbx(8) args.lbx(8)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(8) args.ubx(8)],'LineStyle','--','color','r','LineWidth',wdr);
    hold on; plot(Time,x_traj(5,:),'color','c','LineWidth',wd); title('$\dot{q}_{1R}$','interpreter','latex'); 
    grid on; set(gca,'FontSize',sz)
    
    subplot(2,2,2); 
    plot(Time,X_REF_Original(6,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--');
%     hold on; line([0 sim_time],[args.lbx(9) args.lbx(9)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(9) args.ubx(9)],'LineStyle','--','color','r','LineWidth',wdr);
    hold on; plot(Time,x_traj(6,:),'color','c','LineWidth',wd); title('$\dot{q}_{2R}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(2,2,3);
    plot(Time,X_REF_Original(7,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--');
%     hold on; line([0 sim_time],[args.lbx(10) args.lbx(10)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(10) args.ubx(10)],'LineStyle','--','color','r','LineWidth',wdr);
    
hold on; plot(Time,x_traj(7,:),'color','c','LineWidth',wd); title('$\dot{q}_{1L}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(2,2,4);
    plot(Time,X_REF_Original(8,1:size(X_REF_Original,2)),'color','g','LineWidth',wdr,'LineStyle','--'); 
%     hold on; line([0 sim_time],[args.lbx(11) args.lbx(11)],'LineStyle','--','color','r','LineWidth',wdr);
%     hold on; line([0 sim_time],[args.ubx(11) args.ubx(11)],'LineStyle','--','color','r','LineWidth',wdr);
    hold on; plot(Time,x_traj(8,:),'color','c','LineWidth',wd); title('$\dot{q}_{2L}$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    
    if  ~error
    legend('reference','NMPC trajectory');
    set(legend,...
        'Position',[0.409392268785169 0.188841051895204 0.16950092713185 0.105493865578861]);
    end
    sgtitle(plot_title+" velocities");
    set(gcf,'color','w');
end
U_REF_Original=u_cl;
if plot_u
    figure3=figure % plot u
    subplot(2,2,1);
    plot(Time,u_cl(1,:),'color','c','LineWidth',wd); title('$u_{q_{1R}}$','interpreter','latex');
        if ~error
    hold on;plot(Time,args.ubu(1,:),'color','r','LineWidth',wdr,'LineStyle','--'); 
    hold on;plot(Time,args.lbu(1,:),'color','r','LineWidth',wdr,'LineStyle','--'); 
     end
    grid on; set(gca,'FontSize',sz)
    
    subplot(2,2,2);
    plot(Time,u_cl(2,:),'color','c','LineWidth',wd); title('$u_{q_{2R}}$','interpreter','latex');
        if ~error
    hold on;plot(Time,args.ubu(2,:),'color','r','LineWidth',wdr,'LineStyle','--'); 
    hold on;  plot(Time,args.lbu(2,:),'color','r','LineWidth',wdr,'LineStyle','--'); 
   end
    grid on; set(gca,'FontSize',sz)
    
    subplot(2,2,3);
    plot(Time,u_cl(3,:),'color','c','LineWidth',wd); title('$u_{q_{1L}}$','interpreter','latex');
        if ~error
    hold on;plot(Time,args.ubu(3,:),'color','r','LineWidth',wdr,'LineStyle','--'); 
    hold on;plot(Time,args.lbu(3,:),'color','r','LineWidth',wdr,'LineStyle','--'); 
     end
    grid on; set(gca,'FontSize',sz)
    
    subplot(2,2,4);
    plot(Time,u_cl(4,:),'color','c','LineWidth',wd); title('$u_{q_{2L}}$','interpreter','latex');
     if ~error
    hold on;plot(Time,args.ubu(4,:),'color','r','LineWidth',wdr,'LineStyle','--');
    hold on; plot(Time,args.lbu(4,:),'color','r','LineWidth',wdr,'LineStyle','--');
     end
    grid on; set(gca,'FontSize',sz)
    
    if  ~error
    legend('reference','NMPC trajectory','location','best');
    end
    sgtitle(plot_title+" control inputs");
    set(gcf,'color','w');
    
end

%% saving the graphs
if save
    saveas(figure1,save_dir+file_title+"_positions"+".png")
    saveas(figure2,save_dir+file_title+"_velocities"+".png")
    saveas(figure3,save_dir+file_title+"_control_inputs"+".png")
end

end

