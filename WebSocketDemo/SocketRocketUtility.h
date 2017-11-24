//
//  SocketRocketUtility.h

//

#import <Foundation/Foundation.h>
#import <SocketRocket.h>

@interface SocketRocketUtility : NSObject

/** 连接状态 */
@property (nonatomic,assign) SRReadyState socketReadyState;
@property (nonatomic,  copy) void (^didReceiveMessage)(id message);
+ (SocketRocketUtility *)instance;

-(void)SRWebSocketOpen;//开启连接
-(void)SRWebSocketClose;//关闭连接
- (void)sendData:(NSDictionary *)paramDic withRequestURI:(NSString*)requestURI;//发送数据
- (void)registerNetworkNotifications;//监测网络状态

@end
