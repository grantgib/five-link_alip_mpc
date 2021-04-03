function [] = Plot_IO_MPC_Traj(Time,TimeMPC,error,errorMPC,u,uMPC,plot_q,plot_dq,plot_u,plot_title,satVal)
blue = [0, 0.4470, 0.7410];
wdr = 2; 
wd = 1.5;
sz = 15;
sim_time = 1;
if plot_q
    figure1=figure % plot q
        subplot(4,2,1);
     plot(TimeMPC,errorMPC(1,:),'color',blue,'LineWidth',wd); title('$x$','interpreter','latex'); 
    grid on; set(gca,'FontSize',sz)
           subplot(4,2,2);
     plot(TimeMPC,errorMPC(2,:),'color',blue,'LineWidth',wd); title('$z$','interpreter','latex'); 
    grid on; set(gca,'FontSize',sz)
           subplot(4,2,3);
     plot(TimeMPC,errorMPC(3,:),'color',blue,'LineWidth',wd); title('$Rot_y$','interpreter','latex'); 
    grid on; set(gca,'FontSize',sz)
    subplot(4,2,4);
    plot(Time,error(1,:),'color','c','LineWidth',wdr); 
   hold on; plot(TimeMPC,errorMPC(4,:),'color',blue,'LineWidth',wd); title('$q1R$','interpreter','latex'); 
    grid on; set(gca,'FontSize',sz)
    
    subplot(4,2,5); 
    plot(Time,error(2,:),'color','c','LineWidth',wdr);
   
     hold on; plot(TimeMPC,errorMPC(5,:),'color',blue,'LineWidth',wd); title('$q2R$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(4,2,6);
    plot(Time,error(3,:),'color','c','LineWidth',wdr);
    
     hold on; plot(TimeMPC,errorMPC(6,:),'color',blue,'LineWidth',wd); title('$q1L$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    subplot(4,2,7);
    plot(Time,error(4,:),'color','c','LineWidth',wdr);   
hold on; plot(TimeMPC,errorMPC(7,:),'color',blue,'LineWidth',wd); title('$q2L$','interpreter','latex');
    grid on; set(gca,'FontSize',sz)
    
    
 
    legend('IO','TT-NMPC','location','best');
    set(legend,...
        'Position',[0.409392268785169 0.188841051895204 0.16950092713185 0.105493865578861]);
 sgtitle('Error:'+plot_title);
    set(gcf,'color','w');
end
   %%
U_REF_Original=u;
if plot_u
    figure3=figure % plot u
    subplot(2,2,1);
    plot(Time,u(1,:),'color','c','LineWidth',wd); title('$u_{q_{1R}}$','interpreter','latex');
        
    hold on;plot(TimeMPC(1:length(uMPC(2,:))),uMPC(1,:),'color',blue,'LineWidth',wdr); 
   hold on;plot(TimeMPC(1:length(uMPC(2,:))),satVal(1,:),'color','r','LineWidth',wdr,'LineStyle','--'); 
  hold on;plot(TimeMPC(1:length(uMPC(2,:))),-satVal(1,:),'color','r','LineWidth',wdr,'LineStyle','--'); 
  
    
    grid on; set(gca,'FontSize',sz)
    
    subplot(2,2,2);
    plot(Time,u(2,:),'color','c','LineWidth',wd); title('$u_{q_{2R}}$','interpreter','latex');
       
    hold on;plot(TimeMPC(1:length(uMPC(2,:))),uMPC(2,:),'color',blue,'LineWidth',wdr); 
   hold on;plot(TimeMPC(1:length(uMPC(2,:))),satVal(2,:),'color','r','LineWidth',wdr,'LineStyle','--'); 
  hold on;plot(TimeMPC(1:length(uMPC(2,:))),-satVal(2,:),'color','r','LineWidth',wdr,'LineStyle','--'); 

    grid on; set(gca,'FontSize',sz)
    
    subplot(2,2,3);
    plot(Time,u(3,:),'color','c','LineWidth',wd); title('$u_{q_{1L}}$','interpreter','latex');
     
    hold on;plot(TimeMPC(1:length(uMPC(2,:))),uMPC(3,:),'color',blue,'LineWidth',wdr); 
    hold on;plot(TimeMPC(1:length(uMPC(3,:))),satVal(3,:),'color','r','LineWidth',wdr,'LineStyle','--'); 
  hold on;plot(TimeMPC(1:length(uMPC(3,:))),-satVal(3,:),'color','r','LineWidth',wdr,'LineStyle','--'); 
     
    grid on; set(gca,'FontSize',sz)
    
    subplot(2,2,4);
    plot(Time,u(4,:),'color','c','LineWidth',wd); title('$u_{q_{2L}}$','interpreter','latex');

       hold on; plot(TimeMPC(1:length(uMPC(2,:))),uMPC(4,:),'color',blue,'LineWidth',wdr);
hold on;plot(TimeMPC(1:length(uMPC(2,:))),satVal(4,:),'color','r','LineWidth',wdr,'LineStyle','--'); 
  hold on;plot(TimeMPC(1:length(uMPC(2,:))),-satVal(4,:),'color','r','LineWidth',wdr,'LineStyle','--'); 

    grid on; set(gca,'FontSize',sz)
    
 
    legend('IO','TT-NMPC','location','best');

    sgtitle("control inputs:"+plot_title);
    set(gcf,'color','w');
    
end

%% saving the graphs
% if save
%     saveas(figure1,save_dir+file_title+"_positions"+".png")
%     saveas(figure2,save_dir+file_title+"_velocities"+".png")
%     saveas(figure3,save_dir+file_title+"_control_inputs"+".png")
% end

end

