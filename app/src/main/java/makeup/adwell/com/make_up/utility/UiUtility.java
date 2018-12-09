package makeup.adwell.com.make_up.utility;

import android.app.Activity;
import android.view.Window;

public class UiUtility {

    public static void requestNoTitleBarForActivity(Activity activity){
        activity.requestWindowFeature(Window.FEATURE_NO_TITLE);
    }

}


