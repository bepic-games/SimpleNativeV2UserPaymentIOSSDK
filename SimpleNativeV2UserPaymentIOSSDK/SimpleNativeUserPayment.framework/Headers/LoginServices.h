//
//  LoginServices.h
//  SimpleNativeIOSSDK
//
//  Created by qus on 2021/10/8.
//

#ifndef LoginServices_h
#define LoginServices_h

#import <Foundation/Foundation.h>
#import <SimpleNativeBase/SimpleNativeBase.h>
#import <UIKit/UIKit.h>

@interface ClientLoginParams : NSObject
@property (nonatomic,strong) NSString * loginType;
@property (nonatomic,strong) NSDictionary * params;
@end



typedef void(^ClientLoginParamsSuccess)(ClientLoginParams * params);

@protocol ILogin

-(void) initWithConfig:(SimpleSDKConfig *) config;

-(void) getLoginParams:(ClientLoginParamsSuccess) success fail:(CallbackFail) fail;

@end


@interface DeviceLogin<ILogin>: NSObject

@end

@interface GameCenterLogin<ILogin>: NSObject
@property ClientLoginParamsSuccess success;
@property CallbackFail fail;
@property bool hasCall;

+(instancetype)sharedInstance;

@end

@interface ILoginFactory : NSObject

@property id<ILogin> deviceLogin;
@property id<ILogin> fbLogin;
@property id<ILogin> gameCenterLogin;

+ (instancetype) sharedInstance;

- (void) initWithConfig:(SimpleSDKConfig *) config;

- (id<ILogin>) getLogin:(NSString *)loginType;

@end



#endif /* LoginServices_h */
