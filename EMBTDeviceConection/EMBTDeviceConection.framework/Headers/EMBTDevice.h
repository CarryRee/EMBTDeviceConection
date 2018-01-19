//
//  EMBTDevice.h
//  EMBTDeviceConection
//
//  Created by iOS on 2018/1/18.
//  Copyright © 2018年 eMeet. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMBTDevice : NSObject

@property(nonatomic, copy) NSString *name; //名字
@property(nonatomic, copy) NSData *data;   //数据

@end
